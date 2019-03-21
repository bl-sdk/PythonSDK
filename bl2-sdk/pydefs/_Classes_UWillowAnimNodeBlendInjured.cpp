#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendInjured()
{
    class_< UWillowAnimNodeBlendInjured, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNodeBlendInjured", no_init)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendInjured::BlendTime)
        .def("StaticClass", &UWillowAnimNodeBlendInjured::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}