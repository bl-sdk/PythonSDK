#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APylonSeed()
{
    class_< APylonSeed, bases< AActor >  , boost::noncopyable>("APylonSeed", no_init)
        .def_readwrite("VfTable_IInterface_NavMeshPathObject", &APylonSeed::VfTable_IInterface_NavMeshPathObject)
        .def_readwrite("VfTable_IIGBXNavMeshSeed", &APylonSeed::VfTable_IIGBXNavMeshSeed)
        .def("StaticClass", &APylonSeed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}