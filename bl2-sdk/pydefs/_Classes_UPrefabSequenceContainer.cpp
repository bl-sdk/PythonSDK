#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPrefabSequenceContainer()
{
    class_< UPrefabSequenceContainer, bases< USequence >  , boost::noncopyable>("UPrefabSequenceContainer", no_init)
        .def("StaticClass", &UPrefabSequenceContainer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}