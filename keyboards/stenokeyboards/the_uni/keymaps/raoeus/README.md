# RAOEUS Layout for the Uni

The default Uni V2 keymap made it impossible to use as your only board. I was tired of using a virtual keyboard to sign in to my OS, so this is my solution.

I've included builds labeled with their version numbers in this directory.

> **NOTE**: This is untested on the V3 and V4.

    # version 1 and 2
    make stenokeyboards/the_uni/pro_micro:raoeus

    # version 3
    make stenokeyboards/the_uni/usb_c:raoeus

    # version 4
    qmk compile -kb stenokeyboards/the_uni/rp_2040 -km raoeus

## STENO LAYERS

### STENO
MULTI key switches to UTILITY layer while held down, and switches to QWERTY layer when double tapped within half a second.

    /* 
     * .---------------------------------------------   .-----------------------------------------------------.
     * | S      | T      | P      | H      | *      |   | *      | F      | P      | L      | T      | D      |
     * |--------+--------+--------+--------+--------+   +--------+--------+--------+--------+--------+--------|
     * | S      | K      | W      | R      | *      |   | *      | R      | B      | G      | S      | Z      |
     * '--------+--------+--------+--------+--------+   +-----------------+--------+--------+--------+--------'
     *                   | MULTI  | A      | O      |   | E      | U      | #      | 
     *                   '--------------------------'   '--------------------------'
     */

### UTILITY
Hold down the MULTI key in the STENO layer to use these keys momentarily. 

On the left, we have various modifiers. On the right, we have arrow keys and media controls.

    /* 
     * .---------------------------------------------   .-----------------------------------------------------.
     * |        |        |        |        |        |   | MPREV  | VOLUP  | VOLDN  | MNEXT  |        |        |
     * |--------+--------+--------+--------+--------+   +--------+--------+--------+--------+--------+--------|
     * | SHIFT  | CTRL   | LGUI   | LALT   | SPACE  |   | LEFT   | DOWN   | UP     | RIGHT  |        |        |
     * '--------+--------+--------+--------+--------+   +-----------------+--------+--------+--------+--------'
     *                   | HELD   | #      |        |   | SPACE  |        |        | 
     *                   '--------------------------'   '--------------------------'
     */

## QWERTY LAYERS

### QWERTY

> NOTE: Row 2 is the combined key presses of the corresponding keys above and below on lines 1 and 3

- `VM` pressed simultaneously will output `Enter` (like pressing `R-R` in steno mode)
- `WXC`or `SC` can be pressed to send a **S**hift **C**lick at the cursor's current location

    /*
     * .---------------------------------------------   .-----------------------------------------------------.
     * | Q      | W      | E      | R      | T      |   | Y      | U      | I      | O      | P      | BSPC   |
     * |--------+--------+--------+--------+--------+   +--------+--------+--------+--------+--------+--------|
     * | A      | S      | D      | F      | G      |   | H      | J      | K      | L      | ; :    | ' "    |
     * |--------+--------+--------+--------+--------+   +--------+--------+--------+--------+--------+--------|
     * | Z      | X      | C      | V      | B      |   | N      | M      | , <    | . >    | / ?    | DEL    |
     * '--------+--------+--------+--------+--------+   +-----------------+--------+--------+--------+--------'
     *                   | LCTL   | LGUI   | LALT   |   | SPACE  | LOWER  | RAISE  | 
     *                   '--------------------------'   '--------------------------'
     */

### LOWER

Hold the LOWER key in QWERTY mode to use this layer.

> NOTE: Row 2 is the combined key presses of the corresponding keys above and below on lines 1 and 3

    /* 
     * .---------------------------------------------   .-----------------------------------------------------.
     * | 1      | 2      | 3      | 4      | 5      |   | 6      | 7      | 8      | 9      | 0      | BSPC   |
     * |--------+--------+--------+--------+--------+   +--------+--------+--------+--------+--------+--------|
     * | CAPS   |        |        |        |        |   | LEFT   | DOWN   | UP     | RIGHT  |        | ENTER  |
     * |--------+--------+--------+--------+--------+   +--------+--------+--------+--------+--------+--------|
     * | ` ~    |        |        | TAB    | ESC    |   | PRINT  | - _    | = +    | [ {    | ] }    | \ |    |
     * '--------+--------+--------+--------+--------+   +-----------------+--------+--------+--------+--------'
     *                   | LCTL   | LGUI   | LALT   |   | SPACE  | LOWER  | RAISE  | 
     *                   '--------------------------'   '--------------------------'
     */

### RAISE

Hold the RAISE key in QWERTY mode to use this layer.

> NOTE: Row 2 is the combined key presses of the corresponding keys above and below on lines 1 and 3

    /* 
     * .---------------------------------------------   .-----------------------------------------------------.
     * | F1     | F2     | F3     | F4     | F5     |   | F6     | F7     | F8     | F9     | F10    | F11    |
     * |--------+--------+--------+--------+--------+   +--------+--------+--------+--------+--------+--------|
     * |        |        |        |        |        |   | LEFT   | DOWN   | UP     | RIGHT  |        | ENTER  |
     * |--------+--------+--------+--------+--------+   +--------+--------+--------+--------+--------+--------|
     * |        |        |        | TAB    | ESC    |   | MPREV  | VOLDN  | VOLUP  | MNEXT  | MPLAY  | F12    |
     * '--------+--------+--------+--------+--------+   +-----------------+--------+--------+--------+--------'
     *                   | LCTL   | LGUI   | LALT   |   | SPACE  | LOWER  | RAISE  | 
     *                   '--------------------------'   '--------------------------'
     */

### BOTH

Hold both the LOWER and RAISE keys in QWERTY mode to use this layer

> NOTE: Row 2 is the combined key presses of the corresponding keys above and below on lines 1 and 3

    /* 
     * .---------------------------------------------   .-----------------------------------------------------.
     * |        |        |        |        |        |   |        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+   +--------+--------+--------+--------+--------+--------|
     * |        |        |        |        |        |   |        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+   +--------+--------+--------+--------+--------+--------|
     * |        |        |        |        |        |   |        |        |        |        |        |        |
     * '--------+--------+--------+--------+--------+   +-----------------+--------+--------+--------+--------'
     *                   | STENO  |        |        |   |        | LOWER  | RAISE  | 
     *                   '--------------------------'   '--------------------------'
     */
