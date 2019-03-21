#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGoal_Null()
{
    class_< UGoal_Null, bases< UPathGoalEvaluator >  , boost::noncopyable>("UGoal_Null", no_init)
        .def("StaticClass", &UGoal_Null::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UGoal_Null::Recycle)
        .def("GoUntilBust", &UGoal_Null::GoUntilBust)
        .staticmethod("StaticClass")
  ;
}