#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIPlayerObserver()
{
    class_< UIPlayerObserver, bases< UInterface >  , boost::noncopyable>("UIPlayerObserver", no_init)
        .def("StaticClass", &UIPlayerObserver::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayerLeftGame", &UIPlayerObserver::PlayerLeftGame)
        .def("PlayerEnteredGame", &UIPlayerObserver::PlayerEnteredGame)
        .staticmethod("StaticClass")
  ;
}