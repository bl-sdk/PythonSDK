#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionVectorUniform()
{
    class_< UDistributionVectorUniform, bases< UDistributionVector >  , boost::noncopyable>("UDistributionVectorUniform", no_init)
        .def_readwrite("Max", &UDistributionVectorUniform::Max)
        .def_readwrite("Min", &UDistributionVectorUniform::Min)
        .def_readwrite("LockedAxes", &UDistributionVectorUniform::LockedAxes)
        .def_readonly("MirrorFlags", &UDistributionVectorUniform::MirrorFlags)
        .def("StaticClass", &UDistributionVectorUniform::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}