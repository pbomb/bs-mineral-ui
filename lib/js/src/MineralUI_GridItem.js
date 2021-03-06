// Generated by BUCKLESCRIPT VERSION 4.0.0, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var Js_primitive = require("bs-platform/lib/js/js_primitive.js");
var Grid = require("mineral-ui/Grid");

function make(span, children) {
  var tmp = { };
  if (span) {
    tmp.span = Js_primitive.valFromOption(span);
  }
  return ReasonReact.wrapJsForReason(Grid.GridItem, tmp, children);
}

exports.make = make;
/* ReasonReact Not a pure module */
