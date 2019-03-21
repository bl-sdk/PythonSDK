#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameReleaseDefinition()
{
    class_< UGameReleaseDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGameReleaseDefinition", no_init)
        .def_readwrite("WorldDiscoveryStatID", &UGameReleaseDefinition::WorldDiscoveryStatID)
        .def_readwrite("NumWorldDiscoveryAreas", &UGameReleaseDefinition::NumWorldDiscoveryAreas)
        .def("StaticClass", &UGameReleaseDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}