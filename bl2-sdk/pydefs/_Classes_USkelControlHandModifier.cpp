#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControlHandModifier()
{
    class_< USkelControlHandModifier, bases< USkelControlBase >  , boost::noncopyable>("USkelControlHandModifier", no_init)
        .def_readwrite("HandAnimSeq", &USkelControlHandModifier::HandAnimSeq)
        .def_readwrite("CurrentSequenceName", &USkelControlHandModifier::CurrentSequenceName)
        .def_readonly("UnknownData00", &USkelControlHandModifier::UnknownData00)
        .def("StaticClass", &USkelControlHandModifier::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}