#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPrefabSequence()
{
    class_< UPrefabSequence, bases< USequence >  , boost::noncopyable>("UPrefabSequence", no_init)
        .def_readwrite("OwnerPrefab", &UPrefabSequence::OwnerPrefab)
        .def("StaticClass", &UPrefabSequence::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetOwnerPrefab", &UPrefabSequence::GetOwnerPrefab, return_value_policy< reference_existing_object >())
        .def("SetOwnerPrefab", &UPrefabSequence::SetOwnerPrefab)
        .staticmethod("StaticClass")
  ;
}