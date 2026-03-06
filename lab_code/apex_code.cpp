#include <iostream>
#include <sstream>
#include "apex_code.h"

using namespace std;

void minutes_to_12hour_time(stringstream &in, stringstream &out) {
    long long total_minutes;
    in >> total_minutes;

    // Calculamos horas (0-11) y minutos
    long long hours = (total_minutes / 60) % 12;
    long long minutes = total_minutes % 60;

    out << hours << ":" << minutes << " !";
}

void numbers_to_12hour_time(stringstream &in, stringstream &out) {
    double h_in = 0, m_in = 0, s_in = 0;
    in >> h_in >> m_in >> s_in;

    // Convertimos todo a segundos para manejar decimales
    double total_seconds = (h_in * 3600.0) + (m_in * 60.0) + s_in;
    long long total_secs_int = static_cast<long long>(total_seconds);

    // Formato de 12 horas
    long long h = (total_secs_int / 3600) % 12;
    long long m = (total_secs_int / 60) % 60;
    long long s = total_secs_int % 60;

    out << h << ":" << m << "." << s << " !";
}
