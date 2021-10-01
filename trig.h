#pragma once
#include <iostream>

/**
* \brief Класс Trig для работы с переменной
*/
class trig
{
protected:
	double x;
public:
	/**
	 * \brief Конструктор по умолчанию
	 */
	trig() = default;

	/**
	 * \brief Параметризованный конструктор
	 */
	trig(const double x);

	/**
	 * \brief Деструктор
	 */
	virtual ~trig() = default;

	/**
	 * \brief Получение значения переменной
	 */
	double get_x() const;

	/**
	 * \brief сеттер значения переменной
	 */
	void set_x(const double x);
};

    /**
    * \brief Класс Trigonometry для вычисления значений и производных
    */
    class trigonometry :public trig
    {
    protected:
        /**
        * \brief Получение значения переменной
        */
        double get_num(const double x) const;

    private:
        void set_sin();
        void set_cos();
        void set_tg();
        void set_derivative_sin();
        void set_derivative_cos();
        void set_derivative_tg();
        double sin;
        double cos;
        double tg;
        double derivative_sin;
        double derivative_cos;
        double derivative_tg;

    public:
        /**
        * \brief конструктор по умолчанию
        */
        trigonometry() = default;

        /**
        * \brief параметризованный конструктор
        */
        trigonometry(const double x);

        /**
        * \brief Деструктор
        */
        ~trigonometry() = default;

        /**
        * \brief Получение значения переменной
        */
        double get_x() const;

        /**
         * \brief Задаем значение переменной
         */
        void set_x(const double x);

        /**
        * \brief Получение значения sin
        */
        double get_sin() const;

        /**
        * \brief Получение значения cos
        */
        double get_cos() const;

        /**
        * \brief Получение значения tg
        */
        double get_tg() const;

        /**
        * \brief Получение значения sin'
        */
        double get_derivative_sin() const;

        /**
        * \brief Получение значения cos'
        */
        double get_derivative_cos() const;
        
        /**
        * \brief Получение значения tg'
        */
        double get_derivative_tg() const;

        /**
         * \brief Перегруженный оператор ввода
         */
        friend std::istream& operator>> (std::istream& in, trigonometry& f);

        /**
        * \brief Перегруженный оператор вывода
        */
        friend std::ostream& operator<< (std::ostream& out, const trigonometry& f);
    };