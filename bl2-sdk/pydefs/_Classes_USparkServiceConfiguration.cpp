#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USparkServiceConfiguration(py::module &m)
{
    py::class_< USparkServiceConfiguration,  UObject   >(m, "USparkServiceConfiguration")
        .def_readwrite("ServiceName", &USparkServiceConfiguration::ServiceName)
        .def_readwrite("ConfigurationGroup", &USparkServiceConfiguration::ConfigurationGroup)
        .def_readwrite("Keys", &USparkServiceConfiguration::Keys)
        .def_readwrite("Values", &USparkServiceConfiguration::Values)
        .def_readwrite("OverrideUrl", &USparkServiceConfiguration::OverrideUrl)
        .def("StaticClass", &USparkServiceConfiguration::StaticClass, py::return_value_policy::reference)
        .def("GetFloatParameter", &USparkServiceConfiguration::GetFloatParameter)
        .def("GetIntParameter", &USparkServiceConfiguration::GetIntParameter)
        .def("GetStringParameter", &USparkServiceConfiguration::GetStringParameter)
        .def("GetParameter", &USparkServiceConfiguration::GetParameter)
        .def("LoadService", &USparkServiceConfiguration::LoadService)
        .def("LoadOverrides", &USparkServiceConfiguration::LoadOverrides)
          ;
}