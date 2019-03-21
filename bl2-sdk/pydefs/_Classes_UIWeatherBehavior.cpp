#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIWeatherBehavior()
{
    class_< UIWeatherBehavior, bases< UInterface >  , boost::noncopyable>("UIWeatherBehavior", no_init)
        .def("StaticClass", &UIWeatherBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("DestroyWeatherSystem", &UIWeatherBehavior::DestroyWeatherSystem)
        .def("CreateWeatherSystem", &UIWeatherBehavior::CreateWeatherSystem)
        .staticmethod("StaticClass")
  ;
}