#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UXnaForceFeedbackManager()
{
    class_< UXnaForceFeedbackManager, bases< UForceFeedbackManager >  , boost::noncopyable>("UXnaForceFeedbackManager", no_init)
        .def("StaticClass", &UXnaForceFeedbackManager::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}