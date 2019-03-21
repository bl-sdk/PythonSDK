#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpGroupInstAI()
{
    class_< UInterpGroupInstAI, bases< UInterpGroupInst >  , boost::noncopyable>("UInterpGroupInstAI", no_init)
        .def_readwrite("AIGroup", &UInterpGroupInstAI::AIGroup)
        .def_readwrite("SavedPhysics", &UInterpGroupInstAI::SavedPhysics)
        .def_readwrite("StageMarkActor", &UInterpGroupInstAI::StageMarkActor)
        .def("StaticClass", &UInterpGroupInstAI::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}