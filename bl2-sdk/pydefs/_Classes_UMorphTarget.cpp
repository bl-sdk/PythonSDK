#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMorphTarget()
{
    class_< UMorphTarget, bases< UObject >  , boost::noncopyable>("UMorphTarget", no_init)
        .def_readwrite("MorphLODModels", &UMorphTarget::MorphLODModels)
        .def_readwrite("MaterialSlotId", &UMorphTarget::MaterialSlotId)
        .def_readwrite("ScalarParameterName", &UMorphTarget::ScalarParameterName)
        .def("StaticClass", &UMorphTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}