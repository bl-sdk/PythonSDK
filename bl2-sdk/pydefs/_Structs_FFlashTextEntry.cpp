#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFlashTextEntry()
{
    py::class_< FFlashTextEntry >("FFlashTextEntry")
        .def_readwrite("TextEntry", &FFlashTextEntry::TextEntry)
        .def_readwrite("IconFrameLabel", &FFlashTextEntry::IconFrameLabel)
        .def_readwrite("ArrayType", &FFlashTextEntry::ArrayType)
        .def_readwrite("Obj", &FFlashTextEntry::Obj)
  ;
}