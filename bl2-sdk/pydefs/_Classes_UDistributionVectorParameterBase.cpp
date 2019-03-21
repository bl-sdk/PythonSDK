#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionVectorParameterBase()
{
    class_< UDistributionVectorParameterBase, bases< UDistributionVectorConstant >  , boost::noncopyable>("UDistributionVectorParameterBase", no_init)
        .def_readwrite("ParameterName", &UDistributionVectorParameterBase::ParameterName)
        .def_readwrite("MinInput", &UDistributionVectorParameterBase::MinInput)
        .def_readwrite("MaxInput", &UDistributionVectorParameterBase::MaxInput)
        .def_readwrite("MinOutput", &UDistributionVectorParameterBase::MinOutput)
        .def_readwrite("MaxOutput", &UDistributionVectorParameterBase::MaxOutput)
        .def_readonly("ParamModes", &UDistributionVectorParameterBase::ParamModes)
        .def("StaticClass", &UDistributionVectorParameterBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}