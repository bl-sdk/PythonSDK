#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxEngine(py::object m)
{
    py::class_< UGearboxEngine,  UGameEngine   >(m, "UGearboxEngine")
        .def_readwrite("CurrentUserID", &UGearboxEngine::CurrentUserID)
        .def_readwrite("CurrentDeviceID", &UGearboxEngine::CurrentDeviceID)
        .def_readwrite("DefaultSparkInterfaceName", &UGearboxEngine::DefaultSparkInterfaceName)
        .def_readwrite("SparkInterface", &UGearboxEngine::SparkInterface)
        .def("StaticClass", &UGearboxEngine::StaticClass, py::return_value_policy::reference)
        .def("GetSparkInterface", &UGearboxEngine::GetSparkInterface, py::return_value_policy::reference)
        .def("eventIsCurrentDeviceValid", &UGearboxEngine::eventIsCurrentDeviceValid)
        .def("HasStorageDeviceBeenRemoved", &UGearboxEngine::HasStorageDeviceBeenRemoved)
        .def("GetCurrentDeviceID", &UGearboxEngine::GetCurrentDeviceID)
        .def("SetCurrentDeviceID", &UGearboxEngine::SetCurrentDeviceID)
          ;
}