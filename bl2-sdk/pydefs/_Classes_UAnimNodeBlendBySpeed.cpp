#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendBySpeed()
{
    class_< UAnimNodeBlendBySpeed, bases< UAnimNodeBlendList >  , boost::noncopyable>("UAnimNodeBlendBySpeed", no_init)
        .def_readwrite("Speed", &UAnimNodeBlendBySpeed::Speed)
        .def_readwrite("LastChannel", &UAnimNodeBlendBySpeed::LastChannel)
        .def_readwrite("BlendUpTime", &UAnimNodeBlendBySpeed::BlendUpTime)
        .def_readwrite("BlendDownTime", &UAnimNodeBlendBySpeed::BlendDownTime)
        .def_readwrite("BlendDownPerc", &UAnimNodeBlendBySpeed::BlendDownPerc)
        .def_readwrite("Constraints", &UAnimNodeBlendBySpeed::Constraints)
        .def_readwrite("BlendUpDelay", &UAnimNodeBlendBySpeed::BlendUpDelay)
        .def_readwrite("BlendDownDelay", &UAnimNodeBlendBySpeed::BlendDownDelay)
        .def_readwrite("BlendDelayRemaining", &UAnimNodeBlendBySpeed::BlendDelayRemaining)
        .def("StaticClass", &UAnimNodeBlendBySpeed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}