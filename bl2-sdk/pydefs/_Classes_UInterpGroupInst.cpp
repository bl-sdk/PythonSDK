#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpGroupInst()
{
    class_< UInterpGroupInst, bases< UObject >  , boost::noncopyable>("UInterpGroupInst", no_init)
        .def_readwrite("Group", &UInterpGroupInst::Group)
        .def_readwrite("GroupActor", &UInterpGroupInst::GroupActor)
        .def_readwrite("TrackInst", &UInterpGroupInst::TrackInst)
        .def("StaticClass", &UInterpGroupInst::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}