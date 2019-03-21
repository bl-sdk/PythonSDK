#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMorphTargetSet()
{
    class_< UMorphTargetSet, bases< UObject >  , boost::noncopyable>("UMorphTargetSet", no_init)
        .def_readwrite("Targets", &UMorphTargetSet::Targets)
        .def_readwrite("BaseSkelMesh", &UMorphTargetSet::BaseSkelMesh)
        .def_readwrite("RawWedgePointIndices", &UMorphTargetSet::RawWedgePointIndices)
        .def("StaticClass", &UMorphTargetSet::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindMorphTarget", &UMorphTargetSet::FindMorphTarget, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}