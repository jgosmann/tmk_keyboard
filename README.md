TMK Keyboard Firmware for Ergodox – Neo2 Edition
================================================

This is my fork of the popular [TMK Keyboard Firmware 
Collection](https://github.com/tmk/tmk_keyboard). Actually it is built upon 
[cub-uanic’s adaptation for the 
Ergodox](https://github.com/cub-uanic/tmk_keyboard/tree/cub_layout/keyboard/ergodox). 
I use [Neo2](http://neo-layout.org), this is my take at an Ergodox layout most 
suited for that.

Goals
-----

I like thumb keys. I like them a lot. The main task I use them for is modifiers.  
This means moving Shift, Mod3/Mod4 (Neo stuff), Ctrl, Alt and Super there.  
Because I use i3 as my window manager and rely heavily on the Super modifier, it 
has to be present on both thumb clusters. That means Ctrl and Alt are not.

Another thing I wanted to modify compared to the “original” Ergodox layout was 
the F keys. I want them to be on the default layer. As Neo2 has built in 
Navigation keys, I used the keys in the bottommost row and in the topmost row of 
the thumb clusters. The latter I can‘t reach without huge stretching anyway.

Gaming is a thing I often do in my spare time. For some of those pesky buggers, 
I have to make compromises that result in extra layers (see below).

Layers
------

The firmware has 4 “main” layers at present. More information including the 
actual keymaps can be found in [keymap_neo.h](keyboard/ergodox/keymap_neo.h).

In addition, each layer has a toggle key for Layer5 that hosts some media keys, 
a teensy key and my very own special macro that is intended to switch computers 
on my kvm switch. And I added some roll call macros for my favorite MOBA, 
[Smite](http://www.smitegame.com) :)

![Layout View](layout.png)

[Keyboard Layout Editor link](http://www.keyboard-layout-editor.com/#/layouts/67c6725891c912c01ce3088089f5bafd)

The layout on the image is as follows:

```
---------------------
| Layer0            |
|            Layer3 |
| Layer1            | 
---------------------
|       Layer5      |
---------------------
```

Blank Layer1/3 Slots means the key is the same as on Layer 0. Blank Layer5 slots 
are actually empty. Layer2 is basically Layer1 with QWERTZ letters. See below 
for more information.

### Layer0: Neo2 ###

Standard bread and butter layer for general purpose Neo ownage :)

### Layer1: gamer’s Neo2 ###

This layer has the left Shift thumb key replaced with space bar. The Shift keys 
move to the dead key locations on the outmost keys of the bottom row. Extra CTRL 
keys added below them. This as closely as possible mirrors standard keyboard key 
locations in order to have games usable that don’t allow (re-)mapping of certain 
keys. This mostly happens with Shift.

Additionally, Mod4 is replaced with a Layer4 toggle key. Layer4 has most of the 
features of Neo2’s software Layer4 rebuilt in hardware. This is, again, to 
increase compatibility with certain pieces of software.

### Layer2: poor man’s QWERTZ ###

Sometimes, you need _all_ of your keys in QWERTZ-like locations. This layer 
allows you to do that without switching the OS’ keyboard layout. Also, hardware 
Layer4 again.

### Layer3: poor man’s Neo2 ###

Last but not least, the “I can’t change the computers keyboard layout but I 
can’t be arsed to type QWERTZ” layer. Within the limitations of the crappy 
default German layout, this forms a pretty usable hardware implementation of 
Neo2.

LEDs
----

I re-purposed all of the three default, right-hand side, LEDs. The topmost 
formerly known as num lock one now is caps lock. This is mostly because my KVM 
switch flashes this one in command mode. The other LEDs indicate the currently 
active layer:

- no LED: Layer0
- middle LED: Layer1
- bottom LED: Layer2
- middle & bottom LED: Layer3

Firmware Download
-----------------

You can find the blobs for the latest stable version under 
[releases](https://github.com/kaimi/tmk_keyboard/releases).

Building from Source
--------------------

0. Do the prerequisite stuff in the [build doc](doc/build.md).
1. `git clone https://github.com/kaimi/tmk_keyboard`.
2. `cd tmk_keyboard/keyboard/ergodox`.
3. `make neo`.
4. Either flash manually using teensy loader or (with `teensy_loader_cli` in 
   your PATH) run `make teensy`.

Problems
--------

- Shift + Mod4 + \<key\> sucks. Granted, that pretty much only applies to Shift 
  \+ arrow keys and Shift + Insert, but it _really_ sucks.
- Ctrl + \<left hand side key\> requires both hands. But I can’t swap Ctrl and 
  Alt or Ctrl + Shift + arrow keys becomes my new worst nightmare with 3 keys to 
  press simultaneously on the left thumb cluster.
