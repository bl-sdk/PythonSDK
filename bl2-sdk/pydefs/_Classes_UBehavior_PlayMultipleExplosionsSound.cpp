#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PlayMultipleExplosionsSound()
{
    class_< UBehavior_PlayMultipleExplosionsSound, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PlayMultipleExplosionsSound", no_init)
        .def_readwrite("Definition", &UBehavior_PlayMultipleExplosionsSound::Definition)
        .def_readwrite("OverrideContext", &UBehavior_PlayMultipleExplosionsSound::OverrideContext)
        .def_readwrite("OverrideName", &UBehavior_PlayMultipleExplosionsSound::OverrideName)
        .def("StaticClass", &UBehavior_PlayMultipleExplosionsSound::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PlayMultipleExplosionsSound::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}