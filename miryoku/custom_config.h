// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

/ {
    macros {
        e_caret: e_caret {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&macro_tap &kp CARET &kp E>
                ;
        };
    };
};
