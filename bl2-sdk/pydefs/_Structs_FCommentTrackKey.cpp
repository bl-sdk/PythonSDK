#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCommentTrackKey()
{
    py::class_< FCommentTrackKey >("FCommentTrackKey")
        .def_readwrite("Time", &FCommentTrackKey::Time)
        .def_readwrite("Comment", &FCommentTrackKey::Comment)
  ;
}