#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULeviathanService(py::module &m)
{
    py::class_< ULeviathanService,  UObject   >(m, "ULeviathanService")
		.def_static("StaticClass", &ULeviathanService::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_ISparkUpdateCallback", &ULeviathanService::VfTable_ISparkUpdateCallback)
        .def_readwrite("EventBufferSize", &ULeviathanService::EventBufferSize)
        .def_readwrite("StatBufferSize", &ULeviathanService::StatBufferSize)
        .def_readwrite("AtomTableBufferSize", &ULeviathanService::AtomTableBufferSize)
        .def("eventGetLeviathanServiceConfiguration", &ULeviathanService::eventGetLeviathanServiceConfiguration, py::return_value_policy::reference)
        .def("OnSparkInitialized", &ULeviathanService::OnSparkInitialized)
        .def("LoadServiceConfigurationForPlayer", &ULeviathanService::LoadServiceConfigurationForPlayer)
        .def("GetLeviathanService", &ULeviathanService::GetLeviathanService, py::return_value_policy::reference)
          ;
}