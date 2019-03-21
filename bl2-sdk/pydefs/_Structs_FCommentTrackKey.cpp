#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCommentTrackKey()
{
    class_< FCommentTrackKey >("FCommentTrackKey", no_init)
        .def_readwrite("Time", &FCommentTrackKey::Time)
        .def_readwrite("Comment", &FCommentTrackKey::Comment)
  ;
}