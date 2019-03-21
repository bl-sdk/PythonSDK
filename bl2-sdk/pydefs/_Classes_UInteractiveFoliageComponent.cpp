#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInteractiveFoliageComponent()
{
    class_< UInteractiveFoliageComponent, bases< UStaticMeshComponent >  , boost::noncopyable>("UInteractiveFoliageComponent", no_init)
        .def_readwrite("FoliageSceneProxy", &UInteractiveFoliageComponent::FoliageSceneProxy)
        .def("StaticClass", &UInteractiveFoliageComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}