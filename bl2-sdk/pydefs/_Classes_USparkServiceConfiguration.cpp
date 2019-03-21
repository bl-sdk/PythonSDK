#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USparkServiceConfiguration()
{
    class_< USparkServiceConfiguration, bases< UObject >  , boost::noncopyable>("USparkServiceConfiguration", no_init)
        .def_readwrite("ServiceName", &USparkServiceConfiguration::ServiceName)
        .def_readwrite("ConfigurationGroup", &USparkServiceConfiguration::ConfigurationGroup)
        .def_readwrite("Keys", &USparkServiceConfiguration::Keys)
        .def_readwrite("Values", &USparkServiceConfiguration::Values)
        .def_readwrite("OverrideUrl", &USparkServiceConfiguration::OverrideUrl)
        .def("StaticClass", &USparkServiceConfiguration::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetFloatParameter", &USparkServiceConfiguration::GetFloatParameter)
        .def("GetIntParameter", &USparkServiceConfiguration::GetIntParameter)
        .def("GetStringParameter", &USparkServiceConfiguration::GetStringParameter)
        .def("GetParameter", &USparkServiceConfiguration::GetParameter)
        .def("LoadService", &USparkServiceConfiguration::LoadService)
        .def("LoadOverrides", &USparkServiceConfiguration::LoadOverrides)
        .staticmethod("StaticClass")
  ;
}