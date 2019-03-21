#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPrefab()
{
    class_< UPrefab, bases< UObject >  , boost::noncopyable>("UPrefab", no_init)
        .def_readwrite("PrefabVersion", &UPrefab::PrefabVersion)
        .def_readwrite("PrefabArchetypes", &UPrefab::PrefabArchetypes)
        .def_readwrite("RemovedArchetypes", &UPrefab::RemovedArchetypes)
        .def_readwrite("PrefabSequence", &UPrefab::PrefabSequence)
        .def("StaticClass", &UPrefab::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}