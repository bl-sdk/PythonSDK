#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpGroup()
{
    class_< UInterpGroup, bases< UObject >  , boost::noncopyable>("UInterpGroup", no_init)
        .def_readwrite("VfTable_FInterpEdInputInterface", &UInterpGroup::VfTable_FInterpEdInputInterface)
        .def_readwrite("InterpTracks", &UInterpGroup::InterpTracks)
        .def_readwrite("GroupName", &UInterpGroup::GroupName)
        .def_readwrite("GroupColor", &UInterpGroup::GroupColor)
        .def_readwrite("GroupAnimSets", &UInterpGroup::GroupAnimSets)
        .def("StaticClass", &UInterpGroup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}