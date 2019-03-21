#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATestSplittingVolume()
{
    class_< ATestSplittingVolume, bases< AVolume >  , boost::noncopyable>("ATestSplittingVolume", no_init)
        .def_readwrite("VfTable_IInterface_NavMeshPathObject", &ATestSplittingVolume::VfTable_IInterface_NavMeshPathObject)
        .def("StaticClass", &ATestSplittingVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}