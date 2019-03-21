#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionFloatParameterBase()
{
    class_< UDistributionFloatParameterBase, bases< UDistributionFloat >  , boost::noncopyable>("UDistributionFloatParameterBase", no_init)
        .def_readwrite("ParameterName", &UDistributionFloatParameterBase::ParameterName)
        .def_readwrite("MinInput", &UDistributionFloatParameterBase::MinInput)
        .def_readwrite("MaxInput", &UDistributionFloatParameterBase::MaxInput)
        .def_readwrite("MinOutput", &UDistributionFloatParameterBase::MinOutput)
        .def_readwrite("MaxOutput", &UDistributionFloatParameterBase::MaxOutput)
        .def_readwrite("ParamMode", &UDistributionFloatParameterBase::ParamMode)
        .def_readwrite("Constant", &UDistributionFloatConstant::Constant)
        .def("StaticClass", &UDistributionFloatParameterBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}