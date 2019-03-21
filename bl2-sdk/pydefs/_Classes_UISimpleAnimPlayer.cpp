#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UISimpleAnimPlayer()
{
    class_< UISimpleAnimPlayer, bases< UInterface >  , boost::noncopyable>("UISimpleAnimPlayer", no_init)
        .def("StaticClass", &UISimpleAnimPlayer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}