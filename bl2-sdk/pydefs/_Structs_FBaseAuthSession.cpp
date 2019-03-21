#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBaseAuthSession()
{
    class_< FBaseAuthSession >("FBaseAuthSession", no_init)
        .def_readwrite("EndPointIP", &FBaseAuthSession::EndPointIP)
        .def_readwrite("EndPointPort", &FBaseAuthSession::EndPointPort)
        .def_readwrite("EndPointUID", &FBaseAuthSession::EndPointUID)
  ;
}