#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPersistentGameDataManager(py::module &m)
{
    py::class_< UPersistentGameDataManager,  UObject   >(m, "UPersistentGameDataManager")
		.def_static("StaticClass", &UPersistentGameDataManager::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SequencesWithPersistentData", &UPersistentGameDataManager::SequencesWithPersistentData)
          ;
}