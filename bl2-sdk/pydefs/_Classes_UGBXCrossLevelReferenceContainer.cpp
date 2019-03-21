#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGBXCrossLevelReferenceContainer()
{
    class_< UGBXCrossLevelReferenceContainer, bases< UObject >  , boost::noncopyable>("UGBXCrossLevelReferenceContainer", no_init)
        .def_readwrite("CrossLevelObjectRef", &UGBXCrossLevelReferenceContainer::CrossLevelObjectRef)
        .def("StaticClass", &UGBXCrossLevelReferenceContainer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}