#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttackLocation_Move()
{
    class_< UAttackLocation_Move, bases< UAttackLocation >  , boost::noncopyable>("UAttackLocation_Move", no_init)
        .def_readwrite("MaxTime", &UAttackLocation_Move::MaxTime)
        .def_readwrite("MoveDistance", &UAttackLocation_Move::MoveDistance)
        .def("StaticClass", &UAttackLocation_Move::StaticClass, return_value_policy< reference_existing_object >())
        .def("ValidLocation", &UAttackLocation_Move::ValidLocation)
        .staticmethod("StaticClass")
  ;
}