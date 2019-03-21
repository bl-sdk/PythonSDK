#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeScale()
{
    class_< UParticleModuleSizeScale, bases< UParticleModuleSizeBase >  , boost::noncopyable>("UParticleModuleSizeScale", no_init)
        .def_readwrite("SizeScale", &UParticleModuleSizeScale::SizeScale)
        .def("StaticClass", &UParticleModuleSizeScale::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}