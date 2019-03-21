#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPersistentGameDataManager()
{
    py::class_< UPersistentGameDataManager,  UObject   >("UPersistentGameDataManager")
        .def_readwrite("SequencesWithPersistentData", &UPersistentGameDataManager::SequencesWithPersistentData)
        .def("StaticClass", &UPersistentGameDataManager::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}