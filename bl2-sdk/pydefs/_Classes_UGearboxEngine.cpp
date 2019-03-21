#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxEngine()
{
    class_< UGearboxEngine, bases< UGameEngine >  , boost::noncopyable>("UGearboxEngine", no_init)
        .def_readwrite("CurrentUserID", &UGearboxEngine::CurrentUserID)
        .def_readwrite("CurrentDeviceID", &UGearboxEngine::CurrentDeviceID)
        .def_readwrite("DefaultSparkInterfaceName", &UGearboxEngine::DefaultSparkInterfaceName)
        .def_readwrite("SparkInterface", &UGearboxEngine::SparkInterface)
        .def_readonly("UnknownData00", &UGearboxEngine::UnknownData00)
        .def("StaticClass", &UGearboxEngine::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSparkInterface", &UGearboxEngine::GetSparkInterface, return_value_policy< reference_existing_object >())
        .def("eventIsCurrentDeviceValid", &UGearboxEngine::eventIsCurrentDeviceValid)
        .def("HasStorageDeviceBeenRemoved", &UGearboxEngine::HasStorageDeviceBeenRemoved)
        .def("GetCurrentDeviceID", &UGearboxEngine::GetCurrentDeviceID)
        .def("SetCurrentDeviceID", &UGearboxEngine::SetCurrentDeviceID)
        .staticmethod("StaticClass")
  ;
}