#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFlashTextEntry()
{
    class_< FFlashTextEntry >("FFlashTextEntry", no_init)
        .def_readwrite("TextEntry", &FFlashTextEntry::TextEntry)
        .def_readwrite("IconFrameLabel", &FFlashTextEntry::IconFrameLabel)
        .def_readwrite("ArrayType", &FFlashTextEntry::ArrayType)
        .def_readwrite("Obj", &FFlashTextEntry::Obj)
  ;
}