#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AInstancedFoliageActor()
{
    class_< AInstancedFoliageActor, bases< AActor >  , boost::noncopyable>("AInstancedFoliageActor", no_init)
        .def_readwrite("FoliageMeshes", &AInstancedFoliageActor::FoliageMeshes)
        .def("StaticClass", &AInstancedFoliageActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}