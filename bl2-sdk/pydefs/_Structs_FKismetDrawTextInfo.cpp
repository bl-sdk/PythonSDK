#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKismetDrawTextInfo()
{
    class_< FKismetDrawTextInfo >("FKismetDrawTextInfo", no_init)
        .def_readwrite("MessageText", &FKismetDrawTextInfo::MessageText)
        .def_readwrite("AppendedText", &FKismetDrawTextInfo::AppendedText)
        .def_readwrite("MessageFont", &FKismetDrawTextInfo::MessageFont)
        .def_readwrite("MessageFontScale", &FKismetDrawTextInfo::MessageFontScale)
        .def_readwrite("MessageOffset", &FKismetDrawTextInfo::MessageOffset)
        .def_readwrite("MessageColor", &FKismetDrawTextInfo::MessageColor)
        .def_readwrite("MessageEndTime", &FKismetDrawTextInfo::MessageEndTime)
  ;
}