#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetLocation()
{
    class_< USeqAct_SetLocation, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetLocation", no_init)
        .def_readwrite("LocationValue", &USeqAct_SetLocation::LocationValue)
        .def_readwrite("RotationValue", &USeqAct_SetLocation::RotationValue)
        .def_readwrite("Target", &USeqAct_SetLocation::Target)
        .def("StaticClass", &USeqAct_SetLocation::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_SetLocation::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}