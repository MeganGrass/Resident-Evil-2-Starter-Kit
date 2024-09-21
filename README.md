
# Resident Evil 2 Starter Kit

The RESK project is the culmination of [reverse-engineering efforts](https://github.com/MeganGrass/SLUS_007.48) I made with SLUS_007.48 (Resident Evil 2 Dual Shock)

RESK is mostly written in C, with the exception being small assembly patches that are required for the custom functionality to work

Most limitations in modifying this original PS1 game have been completely bypassed with RESK, allowing for people to create bigger mods, but there are also some important QOL improvements available for those simply curious to experience something new for this PlayStation classic
## History

This project originally began in 2013 as a testing ground for learning to read and write in MIPS R3000A assembly language and very quickly morphed into larger project with a goal: recreate or add missing debug features to the common "BioHazard 2 beta (Nov 30, 1997)"

All efforts were later directed to the US release of Resident Evil 2 Dual Shock (SLUS_007.48), where I was able to eventually have data from all PS1 RE games running from a single disc, all using a single executable -- essentially alowing others to "play" every classic RE game without disc swapping -- with a shiny new debug menu

The "multi-game" build flow, while technically still possible, was eventually scrapped but I believed that the code I'd created for this still had a purpose for modders who've always been hindered by the amount of files that they can put on disc and utilize

The last update was in 2018 and I got busy elsewhere, so the research project was simply released and mostly forgotten about

With RESK, the basic idea was to convert all assembly language code from these previous efforts into C code, and while this presented some challenges because 1) I haven't read/written assembly in years and 2) the code was a buggy mess, I've recently found some spare time to finally cleanup these sources and complete this basic task
## Basic Features
- Quick-Turn
- Quick-Reload
- Experience the game in either Japanese or Western languages
- Controller configurations for both Japanese and Western audiences
- Regional requirements for "target change (L1 while aiming)" have been removed

#### **Quick-Turn**
I've implemented this feature to work two ways:
- Quickly tap the DOWN+RUN buttons
- Simply tap the RUN botton while walking backward

#### **Quick-Reload**
This new feature works as you'd expect:
- Press the RUN button while aiming to reload
- Ammo won't refill and animation won't playback unless the player has the necessary ammo in their inventory

#### **Regional**
Although this version of the game was localized specifically for US audiences, Japanese language is still supported. In fact, any region version can make used of multiple languages and with RESK, these options can now easily be toggled


## Advanced Features
The game engine's file layout has been almost completely modified to allow for more data on disc than originally intended

##### **Benefits**
- 48 (max) RDT and 48 (max) BSS per stage
- 48 (max) Main and 48 (max) Sub BGM
- 48 (max) DO2 files for door cutscenes
- Extended XA table for more voice data
- Both Leon (PL0) and Claire (PL1) scenarios playable on the same disc
- File checksum routines have been completely removed allowing for faster data load

In the original build of this game, these max values were drastically different and varied for each stage, file type, etc. For example, only five RDTs exist for stage 7, thus a content creator could only create five rooms for stage 7 for their mod. Another oddity was the BGM id table being located in savegame data, which was capped to the exact amount of RDTs on disc

RESK allows you to greatly bypass these old hardcoded restrictions and this is accomplished, in-part, by using a custom file container that I've given the extension "CDX"

Some CDX file headers are only very slightly different than others, but the overall structure is the same:

```
struct CDX {
    ULONG size;     // size of file
    ULONG sector;   // sector in file (always start at 1, multiply * 0x800 for absolute file position)
};
```

Most CD functionality was completely rewritten in order to work in-conjunction with other new routines that load and parse CDX file headers

Furthermore, SLD decompression has been completely removed and replaced with basic LZ

*Documentation and toolset for CDX is currently WIP*


## Debug Utilities
The debug menu can be accessed while in-game by pressing the TRIANGLE button

| Option | Description                       |
| :-------- | :-------------------------------- |
| `Room Jump` | select stage/room |
| `Debug Option` | WIP |
| `Controller Test` | WIP |
| `Sound Test` | WIP |
| `Movie Test` | WIP |
| `Flag Test` | view/modify system flags |
| `Event Test` | test room events |
| `Message Test` | test room messages |
| `System Reset` | perform a cold reset |

#### **Weapon Select**
Use the L2/R2 buttons while in-game to change the currently equipped weapon

#### **Status Screen**
Use the L2/R2 buttons to modify the inventory

#### **Anti-Freeze**
Quickly tap the L2/R2 buttons to unfreeze the game (for use when your debug menu settings soft-lock the game, but it cannot fix everything)


## Bugs
- Hard crash when the player uses an interactive item, such as the Valve Handle at the burning helicopter. This was fixed in previous builds, but somehow managed to sneak back in during the ASM->C conversion and I can't remember how it was originally patched
- Hard crash when accessing the "FILE" option in the Status Screen. I've yet to look into how this got broken...
- XA audio was entirely unsupported in previous builds and I've only just now began to reimplement it, often with completely unexpected and hilarious results ("What's Wong with Marvin?")


## Notes
STR (movie) playback is completely disabled until I can get XA functionality back into proper working order

The title screen is extremely basic and currently missing a couple features


## Future Features
There's quite a lot that I'd like to either fix and/or change in this build of the game, but here's a small list:
- Feature complete custom Title Screen menu
- Custom configuration menu and settings
- Place weapon damage tables in the corresponding PLW CDX. *A lot* of memory is reserved for every weapon damage table, when only one is required to be in memory at-once
- Somehow fix the compile error that caused this game to have 9 copies of the same few static structures in the main executable. Almost 0x1000 bytes of system memory are wasted by this redundancy
- Rewrite the entire Status Menu in C, for future custom mod creators to have the ability to recreate it as they wish
- Rewrite all of the enemy overlays in C, for future custom mod creators to have the ability to modify them as they wish


## Building/Compiling
- PSYQ software development kit for Sony PlayStation ([setup instructions](https://www.psxdev.net/help/psyq_install.html))
- Kingcom's [armips](https://github.com/Kingcom/armips)
- Lameguy64's [mkpsxiso](https://github.com/Lameguy64/mkpsxiso)

Each custom overlay and function has its own makefile and linker files for use with PSYQ

Visual Studio solutions are also provided for each custom overlay and function, so any modern-ish version of [Microsoft VS](https://visualstudio.microsoft.com) will work too

#### **overlay.bat**
This batch file compiles each overlay project (when Microsoft VS is installed) and patches original ones to work with the new engine

#### **audio.bat**
This batch file writes XA tables and BGM tables for every gameplay scenario to each BSS CDX file container

#### **executable.bat**
This batch file will compile all custom functions (when Microsoft VS is installed) and patch the original executable with custom code

#### **build.bat**
This batch file is all of the above in consecutive order but an ISO is also created


## FAQ

#### Where can I download the game or get the latest patch?

Because this project fundamentally changes the entire ISO structure, patches end up being almost as large as the original ISO and will likely never be provided

However, a [demo build](https://drive.google.com/file/d/1q0CBDN5wWsZDBkPQ1hkuHp63lAT8Wwce/view?usp=sharing) is available that showcases all of the changes made. This build contains only a very small portion of the game so it cannot be completed to finish. Furthermore, Ex-Battle data is missing entirely so any attempt to get that scenario working will fail

#### Will you please implement *xyz* feature?

My apologies, but probably not. It took six years for me to get back around to this project and my time to work on these things is limited


## Contributing

Contributions and feedback are always welcome :)
## Acknowledgements

 - [Gemini](https://github.com/Gemini-Loboto3) taught me to read/write MIPS assembly language, only to ask me when I was going to convert this project to C... ten years ago!
 - [Patrice Mandin's](https://github.com/pmandin) reevengi/tools were essential in aiding my understanding of how some native file formats are structured
- Everyone who supported my development through the years ;)
## Copyrights

PSYQ software development kit for Sony PlayStation is copyright (©) [Sony Computer Entertainment Inc.](https://sonyinteractive.com/)

All rights, including the copyrights of game, scenario, music and program are reserved by [CAPCOM Co., Ltd.](https://www.capcom.com/)


## License

[MIT](https://choosealicense.com/licenses/mit/)

