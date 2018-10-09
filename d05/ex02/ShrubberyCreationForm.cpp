#include "ShrubberyCreationForm.hpp"

const int ShrubberyCreationForm::_sign = 145;
const int ShrubberyCreationForm::_exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm(void):
	Form("Noname", "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec)
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form(target, "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec)
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj):
	Form("Noname", "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec)
{
    *this = obj;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    static_cast <void> (rhs);
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    std::ofstream  o;

    Form::execute(executor);
    o.open(getTarget() + "_shrubbery",
                 std::ofstream::out | std::ofstream::trunc);
    if (o.fail())
    {
        std::cerr << "Error openning the outfile" << std::endl;
    }
    o << "           \\ i.     / s       /" << std::endl;
    o << "            \\  \\   /         /" << std::endl;
    o << "            .n'   |      a  |_.-._" << std::endl;
    o << "           /  /   /       .-'      `-.      --._" << std::endl;
    o << "          /  /    |     /            \\-.__'       `." << std::endl;
    o << "         |  (     |    |     _        \\   _      .-.  \\" << std::endl;
    o << "         |   `-.-'     |  .-' '-.      | ' `-.  (   )_ |" << std::endl;
    o << "          `-._         \\ (  |    \\     /      \\  `-'  `." << std::endl;
    o << "              `--.      \\ ) \\ \\`-'    /        | .'" << std::endl;
    o << "                  \\    .- '-.| `-._.-' \\      /  \\" << std::endl;
    o << "                  |   /      \\     .    `._.-'    |" << std::endl;
    o << "                  |  / |      |     '            /" << std::endl;
    o << "                  | (_/       |      `-._     _.'" << std::endl;
    o << "                  \\ //\\      .|           `--'" << std::endl;
    o << "                   \"  \\   '\\ \\___/)_          " << std::endl;
    o << "                    |   |  ` \\_      \\`  ,        " << std::endl;
    o << "                    \\   \\       (\\ .o-`-o    " << std::endl;
    o << "                    |    \\__  _______,-'\\`      " << std::endl;
    o << "                    \\      ( |  |              " << std::endl;
    o << "                     |      \\  |               " << std::endl;
    o << "                        b    "" \\" << std::endl;
    o.close();

    return;
}
