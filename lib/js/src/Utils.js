// Generated by BUCKLESCRIPT VERSION 4.0.0, PLEASE EDIT WITH CARE
'use strict';

var Caml_builtin_exceptions = require("bs-platform/lib/js/caml_builtin_exceptions.js");

function unwrapValue(param) {
  var variant = param[0];
  if (variant !== -908856609) {
    if (variant !== 770676513) {
      if (variant >= 1034997432) {
        throw [
              Caml_builtin_exceptions.assert_failure,
              /* tuple */[
                "Utils.re",
                19,
                21
              ]
            ];
      } else {
        return param[1];
      }
    } else {
      throw [
            Caml_builtin_exceptions.assert_failure,
            /* tuple */[
              "Utils.re",
              18,
              16
            ]
          ];
    }
  } else {
    throw [
          Caml_builtin_exceptions.assert_failure,
          /* tuple */[
            "Utils.re",
            17,
            18
          ]
        ];
  }
}

exports.unwrapValue = unwrapValue;
/* No side effect */
