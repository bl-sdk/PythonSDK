#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_GetLocationAndRotation()
{
    class_< USeqAct_GetLocationAndRotation, bases< USequenceAction >  , boost::noncopyable>("USeqAct_GetLocationAndRotation", no_init)
        .def_readwrite("Location", &USeqAct_GetLocationAndRotation::Location)
        .def_readwrite("RotationVector", &USeqAct_GetLocationAndRotation::RotationVector)
        .def_readwrite("Rotation", &USeqAct_GetLocationAndRotation::Rotation)
        .def_readwrite("SocketOrBoneName", &USeqAct_GetLocationAndRotation::SocketOrBoneName)
        .def("StaticClass", &USeqAct_GetLocationAndRotation::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_GetLocationAndRotation::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}