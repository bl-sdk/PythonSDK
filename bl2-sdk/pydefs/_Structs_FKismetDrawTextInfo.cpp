#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKismetDrawTextInfo(py::object m)
{
    py::class_< FKismetDrawTextInfo >(m, "FKismetDrawTextInfo")
        .def_readwrite("MessageText", &FKismetDrawTextInfo::MessageText)
        .def_readwrite("AppendedText", &FKismetDrawTextInfo::AppendedText)
        .def_readwrite("MessageFont", &FKismetDrawTextInfo::MessageFont)
        .def_readwrite("MessageFontScale", &FKismetDrawTextInfo::MessageFontScale)
        .def_readwrite("MessageOffset", &FKismetDrawTextInfo::MessageOffset)
        .def_readwrite("MessageColor", &FKismetDrawTextInfo::MessageColor)
        .def_readwrite("MessageEndTime", &FKismetDrawTextInfo::MessageEndTime)
  ;
}