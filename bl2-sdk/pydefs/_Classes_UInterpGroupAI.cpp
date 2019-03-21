#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpGroupAI()
{
    class_< UInterpGroupAI, bases< UInterpGroup >  , boost::noncopyable>("UInterpGroupAI", no_init)
        .def_readwrite("StageMarkGroup", &UInterpGroupAI::StageMarkGroup)
        .def_readwrite("Alignment", &UInterpGroupAI::Alignment)
        .def_readwrite("AlignmentLerpTime", &UInterpGroupAI::AlignmentLerpTime)
        .def("StaticClass", &UInterpGroupAI::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}